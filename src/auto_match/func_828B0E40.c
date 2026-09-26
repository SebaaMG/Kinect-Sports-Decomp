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
extern int fn_82381BC0();
extern int fn_823AA970();


void fn_828B0E40(int *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_30 [12];
  
  if ((param_2 & 0xff) != 0) {
    iVar2 = 0;
    aiStack_30[0] = *(int *)param_1[0x88];
    iVar3 = 0;
    if ((int *)aiStack_30[0] != (int *)param_1[0x88]) {
      do {
        iVar1 = fn_823AA970(*(undefined4 *)(aiStack_30[0] + 0x10));
        iVar2 = iVar3;
        if (iVar3 < iVar1) {
          iVar2 = iVar1;
        }
        fn_82381BC0(aiStack_30);
        iVar3 = iVar2;
      } while (aiStack_30[0] != param_1[0x88]);
    }
    param_1[0x7e] = iVar2 + 10;
  }
  (**(code **)(*param_1 + 0xc))(param_1,param_2);
  return;
}

