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
extern unsigned int *auStack_70;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822C1928();
extern int fn_822EC248();
extern int fn_82536690();
extern int fn_8255FD70();
extern int fn_8265CA20();
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_88;


void fn_822EC058(int param_1,undefined4 *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong alStack_a0 [2];
  struct { int first; int second; } stack_pair_90;

  undefined4 uStack_88;
  undefined4 *puStack_80;
  undefined4 *puStack_7c;
  undefined1 auStack_70 [112];
  
  fn_8255FD70(&puStack_80,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x118) + 0x24),
                    0xffffffff821ae31c);
  stack_pair_90.first = 0;
  stack_pair_90.second = 0;
  uStack_88 = 0;
  puVar9 = puStack_80;
  do {
    iVar5 = stack_pair_90.first;
    if (puVar9 == puStack_7c) {
      if (stack_pair_90.first == stack_pair_90.second) {
        pcVar8 = (char *)0x0;
        pcVar7 = "";
      }
      else {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar1 = (int)((float)(longlong)(stack_pair_90.second - stack_pair_90.first >> 2) *
                     ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
        alStack_a0[0] = (longlong)iVar1;
        pcVar7 = *(char **)(iVar1 * 4 + stack_pair_90.first);
        pcVar8 = pcVar7;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        pcVar8 = pcVar8 + (-1 - (int)pcVar7);
      }
      fn_82230360(param_1 + 0x28,pcVar7,pcVar8);
      if (iVar5 != 0) {
        fn_8265CA20(iVar5);
      }
      if (puStack_80 != (undefined4 *)0x0) {
        fn_8265CA20();
      }
      return;
    }
    alStack_a0[0] = CONCAT44(*puVar9,((uint)(alStack_a0[0])));
    fn_82230110(auStack_70);
    bVar4 = true;
    puVar3 = (undefined4 *)param_2[1];
    for (puVar10 = (undefined4 *)*param_2; puVar10 != puVar3; puVar10 = puVar10 + 7) {
      puVar6 = puVar10;
      if (0xf < (uint)puVar10[5]) {
        puVar6 = (undefined4 *)*puVar10;
      }
      iVar5 = fn_822C1928(auStack_70,puVar6,0,puVar10[4]);
      if (iVar5 == -1) {
        bVar4 = false;
        break;
      }
    }
    iVar5 = fn_822EC248(param_1,auStack_70);
    if ((bVar4) && (iVar5 == 0)) {
      fn_82536690(&stack_pair_90.first,alStack_a0);
    }
    fn_82230300(auStack_70,1,0);
    puVar9 = puVar9 + 1;
  } while( true );
}

