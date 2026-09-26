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
extern unsigned int *auStack_40;
extern int fn_82E7E7E0();
extern int fn_82E7E900();
extern int fn_82E7ED68();
extern int fn_82E7F868();
extern int fn_82E7F8F0();
extern unsigned int uStack_38;


/* WARNING: Removing unreachable block (ram,0x82e80738) */
/* WARNING: Removing unreachable block (ram,0x82e80720) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong fn_82E80668(ushort *param_1,undefined8 param_2,ushort *param_3)

{
  ushort uVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *apuStack_50 [4];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  apuStack_50[0] = (undefined1 *)0x0;
  uStack_38 = 0;
  if (*param_1 == 0) {
    lVar3 = -0x3ff2c917;
  }
  else if ((param_3 == (ushort *)0x0) || (param_1 == param_3)) {
    lVar3 = -0x7fffbffd;
  }
  else if ((*param_3 == 0) ||
          ((uVar1 = *param_1 & 0xfff, uVar1 != 0xc && ((*param_3 & 0xfff) != uVar1)))) {
    lVar3 = -0x7ff8ffa9;
  }
  else {
    lVar3 = fn_82E7F8F0(param_1,param_2,auStack_40);
    if (((-1 < lVar3) && (lVar3 = fn_82E7E7E0(auStack_40), -1 < lVar3)) &&
       (lVar3 = fn_82E7E900(auStack_40,param_3), -1 < lVar3)) {
      if ((*param_1 & 0xfff) == 0xc) {
        puVar2 = auStack_40;
      }
      else {
        lVar3 = fn_82E7ED68(auStack_40,0,apuStack_50);
        puVar2 = apuStack_50[0];
        if (lVar3 < 0) goto LAB_82e807b8;
      }
      lVar3 = fn_82E7F868(param_1,param_2,puVar2);
      if (-1 < lVar3) {
        uStack_38 = 0;
      }
    }
  }
LAB_82e807b8:
  fn_82E7E7E0(auStack_40);
  return lVar3;
}

