#include <stdio.h>

#define N 10

struct Student {
    int StudentId;
    char StudentName[100];
    int Marks[3];
    int Total;
};

// Read the details of N students from console
void read_details(struct Student st[]) {
    for (int i = 0; i < N; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Student ID: ");
        scanf("%d", &st[i].StudentId);
        printf("Student Name: ");
        scanf("%s", st[i].StudentName);
        printf("Marks (3 subjects): ");
        scanf("%d%d%d", &st[i].Marks[0], &st[i].Marks[1], &st[i].Marks[2]);
    }
}

// Print the details of N students to console
void print_details(struct Student st[]) {
    for (int i = 0; i < N; i++) {
        printf("Details for student %d:\n", i + 1);
        printf("Student ID: %d\n", st[i].StudentId);
        printf("Student Name: %s\n", st[i].StudentName);
        printf("Marks (3 subjects): %d %d %d\n", st[i].Marks[0], st[i].Marks[1], st[i].Marks[2]);
        printf("Total: %d\n", st[i].Total);
    }
}

// Calculate the marks of each student record and store the total in member Total
void calculate_totals(struct Student st[]) {
    for (int i = 0; i < N; i++) {
        st[i].Total = st[i].Marks[0] + st[i].Marks[1] + st[i].Marks[2];
    }
}

// Sort the records based on Total
void sort_records(struct Student st[]) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (st[j].Total > st[j + 1].Total) {
                struct Student temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }
}

int main(void) {
    struct Student students[N];

    read_details(students);
    calculate_totals(students);
    sort_records(students);
    print_details(students);

    return 0;
}
