#define clear() printf("\033[H\033[J")

enum alt{A,B,C,D};

struct question {
  char question[140];
  char a[140];
  char b[140];
  char c[140];
  char d[140];
  enum alt correct;
};

void answer() {
  char input[1];
  scanf("%s", input);

  clear();

  if(strlen(input) == 1) {
    if(toupper(input[0]) == 'S'){
      printf("kek");
    } else {
      exit(1);
    }
  } else {
    exit(1);
  }
}


void showQuestion(struct question *q){
  printf("\n\n\n\n\t\t %s\n\n", q->question);
  printf("\t\t-----------------------------------------\n");
  printf("\t\t A: %s \t   | \t B: %s \n", q->a, q->b);
  printf("\t\t-----------------------------------------\n");
  printf("\t\t C: %s \t   | \t D: %s \n", q->c, q->d);
  printf("\t\t-----------------------------------------\n");

  printf("\033[32;5;20m \n\n\t\tInput you answer....\n\n\n\n\n\n \033[0m");
  answer();

}


void createQuestions(){
  struct question q1 = {"Hva er O upper bound i BubbleSort?", "O(n)", "O(N^2)", "O(1)", "O(log n)", A};
  struct question q2 = {"Hva er 2+1", "kek", "kak", "kok", "kik", B};
  struct question q3 = {"Hva er 2+3", "kek", "kak", "kok", "kik", C};

  showQuestion(&q1);

}
