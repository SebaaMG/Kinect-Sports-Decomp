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
extern int fn_8225F160();
extern int fn_82512E18();
extern int fn_8265CA20();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int iStack_48;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_38;


undefined4 fn_8235D4B8(int param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lStack_50;
  int iStack_48;
  int iStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  
  iVar2 = fn_8225F160();
  iVar2 = *(int *)(iVar2 + 0x14);
  if (iVar2 == 4) {
    uVar3 = 0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x1bb4);
    plVar1 = *(longlong **)(param_1 + 0x1bb8);
    iStack_40 = 0;
    iStack_3c = 0;
    uStack_38 = 0;
    for (; plVar5 != plVar1; plVar5 = (longlong *)((int)plVar5 + 0xc)) {
      iStack_48 = *(int *)(plVar5 + 1);
      lStack_50 = *plVar5;
      if (iStack_48 == iVar2) {
        fn_82512E18(&iStack_40,&lStack_50);
      }
    }
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar2 = (int)((float)(longlong)((iStack_3c - iStack_40) / 0xc) *
                 ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460));
    lStack_50 = (longlong)iVar2;
    iVar2 = iVar2 * 0xc;
    iVar4 = iVar2 + iStack_40;
    uVar3 = *(undefined4 *)(iVar2 + iStack_40);
    iStack_48 = *(undefined4 *)(iVar4 + 8);
    *param_2 = *(undefined4 *)(iVar4 + 4);
    if (iStack_40 != 0) {
      fn_8265CA20();
    }
  }
  return uVar3;
}

