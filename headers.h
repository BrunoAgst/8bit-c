// NOTE: instructions
#define LDA 0x03
#define LDI 0x04
#define ADD 0x05
#define SUB 0x06

// NOTE: functions
void print_init();
void fetch_cycle();
void get_instruction();
void search_instruction();
int select_instruction(char opcode);
void search_operation(char instruct);
void lda_exec(); // TODO: implement lda statement
void ldi_exec();
void add_exec();
void sub_exec();
void print_output();