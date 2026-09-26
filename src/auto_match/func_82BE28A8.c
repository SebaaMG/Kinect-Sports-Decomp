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
extern int fn_82BE5848();
extern int fn_82BEA200();
extern int fn_82BEA230();
extern unsigned int lbl_8322B130;


byte fn_82BE28A8(ulonglong param_1,ulonglong param_2)

{
  int iVar2;
  longlong lVar1;
  byte bVar3;
  
  iVar2 = fn_82BEA200(0xffffffff8322b13c,0xffffffff820e8d0c);
  if (iVar2 == 0) {
    return 0x69;
  }
  if (lbl_8322B130 != 0) {
    bVar3 = 0xc9;
    goto LAB_82be2930;
  }
  if ((param_1 & 0xffffffff) == 0) {
    if ((param_2 & 0xffffffff) != 0) {
LAB_82be2950:
      bVar3 = 0x6a;
      goto LAB_82be2930;
    }
  }
  else if ((param_2 & 0xffffffff) == 0) goto LAB_82be2950;
  lVar1 = fn_82BE5848(param_1,param_2,1);
  bVar3 = -(lVar1 == 0) & 0x69;
LAB_82be2930:
  fn_82BEA230(0xffffffff8322b13c,0xffffffff820e8d0c);
  return bVar3;
}

