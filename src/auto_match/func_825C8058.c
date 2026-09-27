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
extern unsigned int fStack_44;
extern unsigned int fStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int fStack_58;
extern unsigned int fStack_60;
extern int fn_825443D8();
extern int fn_826311B8();
extern int fn_8263CBB0();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82193D04;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8320A898;
extern unsigned int lbl_8326B430;
extern unsigned int lbl_8326B434;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;


void fn_825C8058(int param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  struct { float first; undefined4 second; } stack_pair_60;

  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  iVar3 = lbl_8320A898;
  iVar5 = param_1 + 0xb98;
  iVar1 = (int)((param_2 + 3U & 0xffffffff) << 2);
  if (*(int *)(iVar1 + iVar5) != 0) {
    iVar2 = (int)((param_2 + 5U & 0xffffffff) << 2);
    if (*(int *)(iVar2 + iVar5) == 0) {
      *(undefined4 *)(iVar2 + iVar5) = 1;
      *(undefined4 *)(iVar1 + iVar5) = 0;
      stack_pair_60.second = *(undefined4 *)(param_1 + 0x828);
      stack_pair_60.first = *(float *)(param_1 + 3000) * lbl_821917B0;
      fStack_58 = *(float *)(param_1 + 0xbb4) * lbl_82193D04;
      uStack_54 = lbl_821CC160;
      fStack_4c = (float)((double)((longlong)*(float *)(iVar3 + 0x3224) & 0xffffffff) /
                         (double)lbl_8326B434);
      fStack_50 = (float)((double)((longlong)*(float *)(iVar3 + 0x3220) & 0xffffffff) /
                         (double)lbl_8326B430);
      fStack_44 = (float)((double)((longlong)*(float *)(iVar3 + 0x321c) & 0xffffffff) /
                         (double)lbl_8326B434);
      fStack_48 = (float)((double)((longlong)*(float *)(iVar3 + 0x3218) & 0xffffffff) /
                         (double)lbl_8326B430);
      fn_826311B8(iVar3,0xc0,&stack_pair_60.first,2,0x8000);
      uVar4 = fn_825443D8(param_2);
                    /* WARNING: Subroutine does not return */
      fn_8263CBB0(iVar3,0,uVar4,0x80000000);
    }
  }
  return;
}

