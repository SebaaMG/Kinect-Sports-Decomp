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
extern int fn_8267C498();
extern int fn_82698C48();
extern int fn_82699B40();


void fn_82699FC8(int *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int aiStack_40 [16];
  
  uVar1 = param_1[1];
  aiStack_40[0] = param_2;
  uVar4 = fn_82698C48(param_1,0,uVar1,aiStack_40,0xffffffff82698c28);
  if (uVar4 < uVar1) {
    iVar5 = uVar4 * 4;
    iVar2 = *(int *)(iVar5 + *param_1);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    }
    if (*(int *)(iVar2 + 0x14) == param_2) {
      param_1[3] = 0;
      if (*param_3 != 0x40000) {
        iVar3 = *(int *)(*param_1 + iVar5);
        while (*(int *)(iVar3 + 0x10) != *param_3) {
          uVar4 = uVar4 + 1;
          if ((uVar1 <= uVar4) || (*(int *)(*(int *)(*param_1 + iVar5 + 4) + 0x14) != param_2))
          goto LAB_8269a09c;
          iVar5 = uVar4 * 4;
          iVar3 = *(int *)(iVar5 + *param_1);
        }
      }
      fn_82699B40(param_1);
    }
LAB_8269a09c:
    fn_8267C498(iVar2);
  }
  return;
}

