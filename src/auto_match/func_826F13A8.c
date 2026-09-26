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
extern int fn_826F0610();
extern unsigned int iStack_40;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_50;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_4c;


void fn_826F13A8(int param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  
  iStack_50 = *param_2;
  uStack_4c = 0;
  if (param_2[1] != 0) {
    do {
      if ((*(char *)(iStack_50 + uStack_4c) == '\0') || (*(char *)(iStack_50 + uStack_4c) == ':'))
      break;
      uStack_4c = uStack_4c + 1;
    } while (uStack_4c < (uint)param_2[1]);
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(*(int *)(param_1 + 4) + 0x14) != 0)) {
    iStack_40 = *(int *)(param_1 + 4);
    uStack_30 = *(undefined4 *)(param_1 + 0xc);
    piStack_3c = &iStack_50;
    uStack_2c = 1;
    puStack_38 = &uStack_30;
    uStack_28 = 0;
    piVar2 = (int *)(**(code **)(**(int **)(iStack_40 + 0x14) + 4))
                              (*(int **)(iStack_40 + 0x14),&iStack_40);
    if (piVar2 != (int *)0x0) {
      uVar1 = param_2[1];
      uVar3 = uStack_4c + 1;
      if (uVar1 < uStack_4c + 1) {
        uVar3 = uVar1;
      }
      iStack_44 = uVar1 - uVar3;
      iStack_48 = *param_2 + uVar3;
      if (iStack_44 != 0) {
        (**(code **)(*piVar2 + 8))(piVar2,&iStack_48);
      }
      fn_826F0610(*(undefined4 *)(param_1 + 4),param_1,piVar2,1);
    }
  }
  return;
}

