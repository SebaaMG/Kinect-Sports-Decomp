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
extern unsigned int *auStack_20;
extern int fn_823B67F8();
extern int fn_8243C3D0();
extern int fn_8243C490();
extern int fn_8288B760();
extern int fn_828B00A0();
extern unsigned int lbl_821CC160;


void fn_823B6D70(uint *param_1)

{
  char cVar4;
  int iVar2;
  int *piVar3;
  longlong lVar1;
  undefined8 auStack_20 [2];
  
  if (param_1[3] != 0) {
    cVar4 = fn_8288B760((ulonglong)param_1[3] - 0x68);
    if ((cVar4 != '\0') && (iVar2 = fn_823B67F8(param_1), iVar2 != 0)) {
      piVar3 = (int *)(param_1[3] - 0x68);
      if (param_1[3] == 0) {
        piVar3 = (int *)0x0;
      }
      lVar1 = (**(code **)(*piVar3 + 8))();
      iVar2 = fn_8243C3D0(lVar1 + 0x9c,0);
      if (iVar2 == 0) {
        auStack_20[0] = fn_828B00A0((ulonglong)*param_1 + 0x278);
        piVar3 = (int *)(param_1[3] - 0x68);
        if (param_1[3] == 0) {
          piVar3 = (int *)0x0;
        }
        lVar1 = (**(code **)(*piVar3 + 8))();
        fn_8243C490(lVar1 + 0x9c,auStack_20);
        iVar2 = param_1[3] - 0x68;
        param_1[5] = lbl_821CC160;
        if (param_1[3] == 0) {
          iVar2 = 0;
        }
        *(undefined4 *)(iVar2 + 0x80) = 0;
        param_1[4] = 1;
      }
    }
  }
  return;
}

