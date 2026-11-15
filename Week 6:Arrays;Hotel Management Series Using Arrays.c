#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DAYS     7
#define BRANCHES 3
#define FLOORS   5
#define ROOMS    10

int main(void)
{
    double revenue[DAYS];
    int occupancy[FLOORS][ROOMS];
    int chain[BRANCHES][FLOORS][ROOMS];
    double totalRevenue = 0.0;
    int totalOccupied = 0;
    int b, f, r, d;

    srand((unsigned int)time(NULL));

    /* ---------- 1D Array: Weekly Revenue ---------- */
    printf("=== Weekly Revenue Tracker ===\n");
    for (d = 0; d < DAYS; d++)
    {
        printf("Enter revenue for day %d: ", d + 1);
        scanf("%lf", &revenue[d]);
        totalRevenue += revenue[d];
    }
    printf("Total weekly revenue : %.2f\n", totalRevenue);
    printf("Average daily revenue: %.2f\n", totalRevenue / DAYS);

    /* ---------- 2D Array: One Branch Occupancy ---------- */
    printf("\n=== Room Occupancy (One Branch) ===\n");
    for (f = 0; f < FLOORS; f++)
    {
        for (r = 0; r < ROOMS; r++)
        {
            occupancy[f][r] = rand() % 2;
        }
    }

    for (f = 0; f < FLOORS; f++)
    {
        int occupied = 0;

        for (r = 0; r < ROOMS; r++)
        {
            if (occupancy[f][r] == 1)
            {
                occupied++;
            }
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n",
               f + 1, occupied, ROOMS - occupied);
    }

    /* ---------- 3D Array: Multiple Branches ---------- */
    printf("\n=== Hotel Chain (All Branches) ===\n");
    for (b = 0; b < BRANCHES; b++)
    {
        for (f = 0; f < FLOORS; f++)
        {
            for (r = 0; r < ROOMS; r++)
            {
                chain[b][f][r] = rand() % 2;
                if (chain[b][f][r] == 1)
                {
                    totalOccupied++;
                }
            }
        }
    }
    printf("Total occupied rooms across all branches: %d out of %d\n",
           totalOccupied, BRANCHES * FLOORS * ROOMS);

    return 0;
}
