typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822EC248();
extern int fn_82536690();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_58;


void fn_822EBEE0(int param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  longlong alStack_70 [2];
  struct { int first; int second; } stack_pair_60;

  undefined4 uStack_58;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  undefined1 auStack_40 [32];
  
  fn_8255FD70(&puStack_50,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x118) + 0x24),
                    param_2);
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  uStack_58 = 0;
  for (puVar6 = puStack_50; iVar3 = stack_pair_60.first, puVar6 != puStack_4c; puVar6 = puVar6 + 1) {
    alStack_70[0] = CONCAT44(*puVar6,((uint)(alStack_70[0])));
    fn_82230110(auStack_40);
    iVar3 = fn_822EC248(param_1,auStack_40);
    if (iVar3 == 0) {
      fn_82536690(&stack_pair_60.first,alStack_70);
    }
    fn_82230300(auStack_40,1,0);
  }
  if (stack_pair_60.first == stack_pair_60.second) {
    pcVar5 = (char *)0x0;
    pcVar4 = "";
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar1 = (int)((float)(longlong)(stack_pair_60.second - stack_pair_60.first >> 2) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    alStack_70[0] = (longlong)iVar1;
    pcVar4 = *(char **)(iVar1 * 4 + stack_pair_60.first);
    pcVar5 = pcVar4;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    pcVar5 = pcVar5 + (-1 - (int)pcVar4);
  }
  fn_82230360(param_1 + 0x28,pcVar4,pcVar5);
  if (iVar3 != 0) {
    fn_8265CA20(iVar3);
  }
  if (puStack_50 != (undefined4 *)0x0) {
    fn_8265CA20();
  }
  return;
}

