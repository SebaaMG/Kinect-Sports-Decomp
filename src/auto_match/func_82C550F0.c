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
extern int fn_82BA02A8();
extern int fn_82C53970();
extern int fn_82C563B8();
extern int fn_82CBBD70();
extern int fn_82F641F8();


void fn_82C550F0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    if (param_1[7] != -1) {
      if (param_1[3] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_1[3] + -1;
        iVar2 = param_1[1];
        iVar1 = iVar3 * 4;
        param_1[3] = iVar3;
        iVar3 = *(int *)(iVar1 + iVar2);
        *(undefined4 *)(iVar1 + iVar2) = 0;
      }
      if (param_1[6] != 0) {
        iVar2 = param_1[6] + -1;
        param_1[6] = iVar2;
        *(undefined4 *)(iVar2 * 4 + param_1[4]) = 0;
      }
      while (iVar3 != 0) {
        fn_82C563B8((ulonglong)(uint)param_1[9] + 8,iVar3);
        if (param_1[3] == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = param_1[3] + -1;
          iVar2 = param_1[1];
          iVar1 = iVar3 * 4;
          param_1[3] = iVar3;
          iVar3 = *(int *)(iVar1 + iVar2);
          *(undefined4 *)(iVar1 + iVar2) = 0;
        }
        if (param_1[6] != 0) {
          iVar2 = param_1[6] + -1;
          param_1[6] = iVar2;
          *(undefined4 *)(iVar2 * 4 + param_1[4]) = 0;
        }
      }
    }
    fn_82CBBD70(param_1 + 1);
    fn_82CBBD70(param_1 + 4);
    if (*param_1 != 0) {
      fn_82C53970();
      *param_1 = 0;
    }
    fn_82BA02A8((ulonglong)(uint)param_1[9] + 8,param_1);
    fn_82F641F8(param_1);
  }
  return;
}

