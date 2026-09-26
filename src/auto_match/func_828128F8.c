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
extern int fn_828132A8();
extern int fn_828133A8();
extern int fn_828135A0();
extern int fn_82813AE0();
extern unsigned int lbl_8320A3FC;
extern unsigned int lbl_8320A420;


undefined8 fn_828128F8(void)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int aiStack_20 [2];
  undefined *puStack_18;
  undefined4 *puStack_14;
  
  fn_828133A8(0xffffffff8320a3fc);
  puStack_18 = &lbl_8320A3FC;
  puStack_14 = &lbl_8320A420;
  iVar1 = lbl_8320A420;
  do {
    if (iVar1 == 0) {
      uVar3 = 0;
code_r0x8281297c:
      fn_828135A0(&puStack_18);
      return uVar3;
    }
    if ((*(int *)(iVar1 + 0xd0) == 0) &&
       (cVar2 = fn_82813AE0(iVar1 + 0x88,aiStack_20), cVar2 != '\0')) {
      *(undefined1 *)(aiStack_20[0] + 0x15) = 0;
      fn_828132A8();
      uVar3 = 1;
      goto code_r0x8281297c;
    }
    iVar1 = *(int *)(iVar1 + 200);
  } while( true );
}

