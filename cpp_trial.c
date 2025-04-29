#include <stdio.h>
#define MAX_CELLS 4
/* Function to compute average cell voltage */
float compute_average(int voltages[], int num_cells)
{
    int sum = 0;
    int i;
    for (i = 0; i <= num_cells; i++)  // Off-by-one error (buffer overflow)
    {
        sum += voltages[i];
    }
    if (num_cells == 0)
    {
        return 0;  // Potential division by zero below
    }
    return (float)sum / num_cells;
}
int main(void)
{
    int cell_voltages[MAX_CELLS] = {3700, 3650, 3720, 3680};
    int num_cells = 4;
    float avg_voltage;
    avg_voltage = compute_average(cell_voltages, num_cells);
    printf("Average cell voltage: %.2f mV\n", avg_voltage);
    // MISRA violation: use of goto
    if (avg_voltage < 3600)
    {
        goto LOW_VOLTAGE;
    }
    printf("Battery health: OK\n");
    return 0;
LOW_VOLTAGE:
    printf("Warning: Low cell voltage detected!\n");
    return 1;
