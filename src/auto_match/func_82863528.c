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
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e0;
extern unsigned int fStack_dc;
extern int fn_827EAAF0();
extern int fn_827EB678();
extern int fn_8285A808();
extern int fn_82861F50();
extern int fn_82863400();
extern int fn_82863790();


bool fn_82863528(void)

{
  int iVar2;
  longlong lVar1;
  ulonglong uVar3;
  undefined1 auStack_e0 [4];
  float fStack_dc;
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [176];
  
  iVar2 = fn_8285A808();
  fn_82863790(auStack_d8);
  fn_82861F50(auStack_d8[0],auStack_c0);
  auStack_e0[0] = 0;
  uVar3 = (ulonglong)*(uint *)(iVar2 + 0x90);
  if (*(int *)(iVar2 + 0x94) == 0) {
    lVar1 = fn_827EB678(auStack_c0,uVar3 + 4,uVar3 + 0x10,auStack_e0);
  }
  else {
    fn_82863400(uVar3 + 4,uVar3 + 0x10,*(int *)(iVar2 + 0x94),auStack_d0,&fStack_dc);
    lVar1 = fn_827EAAF0((double)fStack_dc,auStack_c0,auStack_d0);
  }
  return lVar1 != 0;
}

