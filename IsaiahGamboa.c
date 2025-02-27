#include <stdio.h>

#define MAX_CLASSES 100

//Global Variables

int num_classes = 0;
double cpi[MAX_CLASSES];
double instruction_count[MAX_CLASSES];
double clock_rate;

void enter_params() {			//selection one: entering the parameters

	printf("Enter the number of instructions: ");
	scanf("%d", &num_classes);

	printf("Enter the frequency of the machine (MHz): ");
	scanf("%lf", &clock_rate);

	for (int i = 0; i < num_classes; i++) {
		printf("Enter CPI of class %d: ", i +1);
		scanf("%lf", &cpi[i]);
        
        printf("Enter instruction count of class %d (millions): ", i + 1);
        scanf("%lf", &instruction_count[i]);
    }
}

void print_input_table() {
    printf("\n-------------------------\n");
    printf("| Class | CPI  | Count  |\n");
    printf("-------------------------\n");
    for (int i = 0; i < num_classes; i++) {
        printf("| %5d | %.2f | %.2f |\n", i + 1, cpi[i], instruction_count[i]);
    }
    printf("-------------------------\n");
}

void print_performance_table() {
    double total_cycles = 0;
    double total_instructions = 0;
    
    for (int i = 0; i < num_classes; i++) {
        total_cycles += cpi[i] * instruction_count[i];
        total_instructions += instruction_count[i];
    }
    
    double avg_cpi = total_cycles / total_instructions;
    double cpu_time = (total_cycles / (clock_rate * 1e6)) * 1000; // Convert to ms
    double mips = total_instructions  / (cpu_time * 1e3);
    
    printf("\n-------------------------\n");
    printf("| Performance  | Value  |\n");
    printf("-------------------------\n");
    printf("| Average CPI  | %.2f   |\n", avg_cpi);
    printf("| CPU Time (ms)| %.2f   |\n", cpu_time);
    printf("| MIPS         | %.2f  |\n", mips);
    printf("-------------------------\n");
}

int main() {
    int choice;
    do {
        printf("\nPerformance assessment:\n");
        printf("-----------------------\n");
        printf("1) Enter parameters\n");
        printf("2) Print table of input parameters\n");
        printf("3) Print table of performance\n");
        printf("4) Quit\n");
        printf("Enter selection: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                enter_params();
                break;
            case 2:
                print_input_table();
                break;
            case 3:
                print_performance_table();
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);
    
    return 0;
}

	


