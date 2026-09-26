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
extern int fn_82248B90();
extern int fn_8288EC98();
extern int fn_82897710();
extern int fn_828A12E8();


void fn_82891488(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar2;
  int iVar3;
  undefined8 uVar1;
  char cVar4;
  int aiStack_30 [12];
  
  iVar2 = fn_828A12E8(param_2);
  aiStack_30[0] = **(int **)(iVar2 + 8);
  while (iVar2 = aiStack_30[0], iVar3 = fn_828A12E8(param_2), iVar2 != *(int *)(iVar3 + 8)) {
    iVar2 = *(int *)(iVar2 + 0x14);
    fn_82897710(*(undefined4 *)(iVar2 + 0x34),param_3);
    if (*(char *)((int)param_3 + 0x26) == '\0') {
      uVar1 = (**(code **)(*param_3 + 0xc))(param_3);
      if ((*(int *)(iVar2 + 0x34) == 0) ||
         (iVar3 = *(int *)(*(int *)(iVar2 + 0x34) + 0x38), iVar3 == 0)) {
        cVar4 = '\0';
      }
      else {
        cVar4 = *(char *)(iVar3 + 0x26);
      }
      if ((cVar4 != '\0') && (*(char *)(iVar2 + 0x5e) != '\0')) {
        fn_8288EC98(iVar2,uVar1);
      }
    }
    fn_82248B90(aiStack_30);
  }
  return;
}

