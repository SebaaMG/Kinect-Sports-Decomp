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
extern unsigned int *auStack_50;
extern int fn_8251F720();
extern int fn_825200F0();
extern int fn_825BC908();
extern int fn_827D6968();
extern unsigned int lbl_821CAB38;
extern unsigned int lbl_831C03EC;
extern unsigned int lbl_83265A24;


void fn_82568A30(int param_1,undefined8 param_2)

{
  short sVar1;
  char cVar3;
  int iVar2;
  int iVar4;
  undefined1 auStack_50 [80];
  
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  fn_825200F0(auStack_50);
  cVar3 = fn_827D6968(lbl_83265A24,auStack_50,0xffffffffffffffff);
  if (cVar3 != '\0') {
    iVar2 = fn_8251F720(param_2,1);
    if (iVar2 != 0) {
      sVar1 = *(short *)(iVar2 + 0xc);
      iVar4 = iVar2;
      while (sVar1 != 0) {
        if (*(code **)(&lbl_831C03EC + (uint)*(ushort *)(iVar4 + 0xc) * 8) != (code *)0x0) {
          (**(code **)(&lbl_831C03EC + (uint)*(ushort *)(iVar4 + 0xc) * 8))(iVar4);
        }
        iVar4 = *(int *)(&lbl_821CAB38 + (uint)*(ushort *)(iVar4 + 0xc) * 4) + iVar4;
        sVar1 = *(short *)(iVar4 + 0xc);
      }
    }
    fn_825BC908(iVar2);
  }
  *(int *)(param_1 + 0x70) = iVar2;
  return;
}

