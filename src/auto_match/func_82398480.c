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
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822ABA88();
extern int fn_822C8C08();
extern int fn_822E5340();
extern int fn_822E53F8();


void fn_82398480(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  piVar2 = *(int **)(param_1 + 8);
  iVar3 = 0;
  if ((piVar2[1] - *piVar2 & 0xfffffffcU) != 0) {
    iVar4 = 0;
    do {
      uVar5 = 0;
      piVar2 = *(int **)(*piVar2 + iVar4);
      iVar1 = *(int *)(piVar2[4] * 4 + *piVar2);
      if (*(int *)(iVar1 + 8) != 0) {
        do {
          iVar1 = fn_822ABA88(iVar1,uVar5);
          if (*(int *)(iVar1 + 0x24) == 0) {
            fn_822C8C08(*(undefined4 *)(iVar1 + 0x114),0xffffffff821aded8);
            fn_82230110(auStack_90,0xffffffff821aded8);
            fn_822E5340(iVar1,auStack_90);
            fn_82230300(auStack_90,1,0);
            fn_82230110(auStack_70,0xffffffff821adec4);
            fn_822E53F8(iVar1,auStack_70);
            fn_82230300(auStack_70,1,0);
          }
          uVar5 = uVar5 + 1;
          iVar1 = *(int *)(piVar2[4] * 4 + *piVar2);
        } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 8));
      }
      piVar2 = *(int **)(param_1 + 8);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < piVar2[1] - *piVar2 >> 2);
  }
  return;
}

