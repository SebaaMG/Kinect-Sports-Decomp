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
extern int fn_82BA04B8();
extern int fn_82BA05E8();
extern unsigned int iStack_30;
extern unsigned int lbl_820E0824;
extern unsigned int lbl_820E0828;
extern unsigned int lbl_820E082C;


void fn_82BBA760(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iStack_30;
  int aiStack_2c [11];
  
  cVar2 = (**(code **)(*param_1 + 0x4c))();
  if ((cVar2 != '\0') && (((uint)param_1[0x39] >> 9 & 1) != 0)) {
    piVar1 = (int *)param_1[0x3c];
    iStack_30 = param_1[0x20];
    aiStack_2c[0] = piVar1[0x20];
    if ((iStack_30 != lbl_820E082C) &&
       ((cVar2 = (**(code **)(*(int *)param_1[0x3b] + 0x40))((int *)param_1[0x3b]), cVar2 != '\0' &&
        (cVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1), cVar2 != '\0')))) {
      iVar3 = 0;
      do {
        cVar2 = *(char *)((int)aiStack_2c + iVar3 + -4);
        if ((cVar2 == '\0') && (*(char *)((int)aiStack_2c + iVar3) == '\0')) {
          (**(code **)(*param_1 + 0x50))(param_1,1);
          return;
        }
        if (cVar2 != '\x01') {
          return;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 4);
      fn_82BA05E8(param_1,1,piVar1);
      iVar3 = lbl_820E0824;
      param_1[0x20] = lbl_820E0828;
      param_1[0x21] = iVar3;
      fn_82BA04B8(param_1);
    }
  }
  return;
}

