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
extern int fn_82250A18();
extern int fn_8225F670();
extern int fn_8225FD88();
extern int fn_8225FDE0();
extern int fn_82E1CAD0();
extern int fn_82E1CB08();
extern int fn_82E1CB40();
extern int fn_82E1CB88();
extern int fn_82E1CCA8();
extern int fn_82E1CD08();
extern unsigned int lbl_832660F8;
extern unsigned int lbl_832660FC;
extern unsigned int lbl_832760AA;
extern unsigned int lbl_832760AB;
extern unsigned int lbl_832760B8;
extern unsigned int lbl_832760BC;
extern unsigned int lbl_83276584;
extern unsigned int lbl_832975B0;


void fn_82264520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char *pcVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar2;
  
  uVar1 = lbl_83276584;
  pcVar3 = (char *)fn_8225F670();
  if (*pcVar3 != '\0') {
    iVar4 = fn_8225FDE0(0xf,1);
    if ((iVar4 == 0) && (cVar5 = fn_82E1CAD0(0xf), cVar5 != '\0')) {
      fn_82E1CD08();
      fn_82E1CB88(0xffffffff821a684c,uVar1);
      fn_82E1CB88(0xffffffff821a74a8,param_1);
      uVar2 = fn_8225FD88(param_2);
      fn_82E1CB08(0xffffffff821a6874,uVar2,0);
      fn_82E1CB88(0xffffffff821a6f50,param_3);
      fn_82E1CB88(0xffffffff821a6f60,param_4);
      iVar4 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar4 = fn_82250A18();
      }
      fn_82E1CB40(0xffffffff821a6868,*(undefined1 *)(iVar4 + 4));
      fn_82E1CCA8();
    }
  }
  lbl_832760AA = 1;
  lbl_832760AB = 0;
  lbl_832760B8 = lbl_832660F8;
  lbl_832760BC = lbl_832660FC;
  return;
}

