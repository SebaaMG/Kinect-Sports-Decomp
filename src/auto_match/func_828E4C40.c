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
extern unsigned int *auStack_30;
extern int fn_8289F270();
extern int fn_828E4B88();


void fn_828E4C40(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_30 [48];
  
  if (*param_1 != param_1[3]) {
    if (*param_1 != param_1[1]) {
      do {
        piVar1 = *(int **)(*param_1 + 8);
        (**(code **)(*piVar1 + 8))(piVar1);
        iVar2 = param_1[2];
        iVar3 = *(int *)(iVar2 + 0x5c);
        if (iVar3 != 0) {
          fn_8289F270(iVar2 + 4,iVar3,auStack_30);
          *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) - iVar3;
        }
        fn_828E4B88(*(undefined4 *)(*param_1 + 8),(ulonglong)(uint)param_1[2] + 4);
        iVar2 = param_1[2];
        if (*(char *)(*(int *)(*param_1 + 8) + 4) == '\0') {
          *(int *)(iVar2 + 0x6c) = *(int *)(iVar2 + 0x6c) + 1;
        }
        else {
          *(int *)(iVar2 + 0x68) = *(int *)(iVar2 + 0x68) + 1;
        }
        iVar2 = *(int *)(*param_1 + 8);
        if ((*(char *)(iVar2 + 4) == '\0') ||
           ((iVar2 = *(int *)(iVar2 + 0xc), iVar2 != 0 && (*(int *)(iVar2 + 4) != 0)))) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (!bVar4) {
          param_1[3] = *param_1;
          (**(code **)(*piVar1 + 0xc))(piVar1);
          break;
        }
        (**(code **)(*piVar1 + 0xc))(piVar1);
        iVar2 = *(int *)*param_1;
        *param_1 = iVar2;
      } while (iVar2 != param_1[1]);
    }
    if (*param_1 == param_1[1]) {
      param_1[3] = param_1[1];
    }
  }
  return;
}

