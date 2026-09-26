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
extern int fn_82693A98();
extern int fn_82693B08();
extern int fn_826944C8();
extern int fn_82695128();


undefined8 fn_8269AEB8(int *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int aiStack_20 [2];
  
  if ((*(uint *)(*param_1 + 0xc) >> 0x1d & 1) == 0) {
    iVar2 = fn_82693A98(param_1);
    if ((iVar2 != 0) && (iVar2 = fn_82693B08(param_1,0), iVar2 == 0x5f)) {
      fn_82695128(aiStack_20,param_1);
      iVar2 = aiStack_20[0];
      if ((*(uint *)(aiStack_20[0] + 0xc) >> 0x1c & 1) != 0) {
        if (param_2 != (int *)0x0) {
          *(int *)(aiStack_20[0] + 8) = *(int *)(aiStack_20[0] + 8) + 1;
          lVar3 = (ulonglong)*(uint *)(*param_2 + 8) - 1;
          *(int *)(*param_2 + 8) = (int)lVar3;
          if (lVar3 == 0) {
            fn_826944C8();
          }
          *param_2 = iVar2;
        }
        lVar3 = (ulonglong)*(uint *)(aiStack_20[0] + 8) - 1;
        *(int *)(aiStack_20[0] + 8) = (int)lVar3;
        if (lVar3 == 0) {
          fn_826944C8(aiStack_20[0]);
        }
        goto LAB_8269aee4;
      }
      lVar3 = (ulonglong)*(uint *)(aiStack_20[0] + 8) - 1;
      *(int *)(aiStack_20[0] + 8) = (int)lVar3;
      if (lVar3 == 0) {
        fn_826944C8(aiStack_20[0]);
      }
    }
    uVar1 = 0;
  }
  else {
LAB_8269aee4:
    uVar1 = 1;
  }
  return uVar1;
}

