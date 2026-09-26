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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8295A330();
extern int fn_82F68CC0();


undefined8 fn_8295D0A8(int param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (((*(uint *)(param_1 + 0xcc) & 1) != 0) && (*(int *)(param_1 + 0x128) != 0)) {
    if ((ulonglong)*(uint *)(param_1 + 0x130) <= (ulonglong)*(uint *)(param_1 + 300)) {
      lVar1 = fn_8265C940((ulonglong)*(uint *)(param_1 + 0x130) * 0x30,0x24810000);
      if (lVar1 == 0) {
        return 0xffffffff8007000e;
      }
      fn_82F68CC0(lVar1,*(undefined4 *)(param_1 + 0x128),(ulonglong)*(uint *)(param_1 + 300) * 0x18
                  );
      fn_8265C990(*(undefined4 *)(param_1 + 0x128),0x24810000);
      *(int *)(param_1 + 0x128) = (int)lVar1;
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) << 1;
    }
    iVar3 = 0;
    lVar1 = 4;
    *(undefined4 *)(*(int *)(param_1 + 300) * 0x18 + *(int *)(param_1 + 0x128)) =
         *(undefined4 *)(param_1 + 0x108);
    *(int *)(*(int *)(param_1 + 300) * 0x18 + *(int *)(param_1 + 0x128) + 4) =
         *(int *)(param_1 + 0x114) << 2;
    do {
      iVar2 = *(int *)(param_1 + 300) * 6 + iVar3;
      iVar3 = iVar3 + 1;
      *(undefined4 *)((iVar2 + 2) * 4 + *(int *)(param_1 + 0x128)) = 0xffffffff;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + 1;
  }
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x114);
  fn_8295A330(param_1,param_2);
  return 0;
}

