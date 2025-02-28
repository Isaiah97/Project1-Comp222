#include <stdio.h>

#define CLASSES 100

//Global Variables
int num_classes = 0; //classes max is 3
double cpi[CLASSES]; // cpi
double instruction_count[CLASSES]; // instructions
double clock_rate; //clock rate

void enter_params() {			//need to make inputs for option 1

	printf("Enter the number of instructions: "); //number of intructions
	scanf("%d", &num_classes);

	printf("Enter the frequency of the machine (MHz): "); //machine frequency
	scanf("%lf", &clock_rate);

	for (int i = 0; i < num_classes; i++) {
		printf("Enter CPI of class %d: ", i +1); //CPI entries
		scanf("%lf", &cpi[i]);
        
        printf("Enter instruction count of class %d (millions): ", i + 1); //instruction coun of class 1 thru 3
        scanf("%lf", &instruction_count[i]);
    }
}
// use format %.2f for printf statements
void print_input_table() { //need to make table of input values for option 2
    printf("\n-----------------------\n");
    printf("| Class | CPI  | Count|\n");
    printf("-----------------------\n");
    for (int i = 0; i < num_classes; i++) { //have a loop to see the number of classes
        printf("| %3d | %.2f | %.2f |\n", i + 1, cpi[i], instruction_count[i]); //make things fit nicely in table
    }
    printf("-----------------------\n");
}

void print_performance_table() { //need to make performance table for option 3
    //need calculations for Average CPI, CPU time, and MIPS
    //will need instructions and cycles for calculations
    double total_cycles = 0; 
    double total_instructions = 0;
    
    //need to make sure option three covers as many classes were inputed
    for (int i = 0; i < num_classes; i++) {
        total_cycles += cpi[i] * instruction_count[i];
        total_instructions += instruction_count[i];
    }
    
    //need to code the calculations for each value
    //reference lecture slides for calculations
    double avg_cpi = total_cycles / total_instructions;
    double cpu_time = (total_instructions * avg_cpi) / clock_rate * 1000; //need to convert to ms
    double mips = clock_rate / avg_cpi;
    
    //Make the table of performance
    printf("\n-------------------------\n");
    printf("| Performance  | Value  |\n");
    printf("-------------------------\n");
    printf("| Average CPI  | %.2f   |\n", avg_cpi);
    printf("| CPU Time (ms)| %.2f |\n", cpu_time);
    printf("| MIPS         | %.2f  |\n", mips);
    printf("-------------------------\n");
}

int main() {        //need to make option selector for this to work
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
        
        //fill in the different cases with 
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
    } while (choice != 4); //make sure it only remains 4 options
    
    return 0;
}

	


