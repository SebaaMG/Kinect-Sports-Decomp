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
extern unsigned int *auStack_2c;
extern int fn_824973B0();
extern int fn_82498FE8();
extern unsigned int iStack_30;


undefined4 fn_82498C88(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iStack_30;
  undefined1 auStack_2c [44];
  
  if (param_2 <= param_3) {
    do {
      iStack_30 = param_2;
      iVar4 = fn_824973B0(param_1 + 0x30,&iStack_30);
      piVar6 = (int *)(iVar4 * 8 + *(int *)(param_1 + 0x40));
      puVar1 = *(undefined4 **)(param_1 + 0x34);
      puVar2 = (undefined4 *)*piVar6;
      piVar3 = puVar2;
      while( true ) {
        puVar7 = puVar1;
        if (puVar2 != puVar1) {
          puVar7 = *(undefined4 **)piVar6[1];
        }
        if (piVar3 == puVar7) goto LAB_82498d48;
        piVar5 = piVar3;
        if (piVar3[2] == param_2) break;
        piVar3 = (int *)*piVar3;
      }
      while( true ) {
        puVar7 = puVar1;
        if (puVar2 != puVar1) {
          puVar7 = *(undefined4 **)piVar6[1];
        }
        if ((piVar5 == puVar7) || (param_2 != piVar5[2])) break;
        piVar5 = (undefined4 *)*piVar5;
      }
      if (piVar3 == piVar5) {
LAB_82498d48:
        piVar3 = *(int **)(param_1 + 0x34);
        piVar5 = piVar3;
      }
      for (; piVar3 != piVar5; piVar3 = (int *)*piVar3) {
      }
      fn_82498FE8(auStack_2c,param_1 + 0x30);
      param_2 = param_2 + 1;
    } while (param_2 <= param_3);
  }
  return *(undefined4 *)(param_1 + 0x38);
}

