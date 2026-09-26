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
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FEF008();
extern int fn_82FEF170();
extern int fn_830224E8();
extern int fn_83024470();
extern int fn_83024C50();
extern unsigned int lbl_831BC770;


undefined4 * fn_82FECFF0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_82FA5060(lbl_831BC770,0x1a0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_82FEF170();
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    iVar2 = fn_83024C50(puVar1 + 4,param_2,param_3,param_1);
    if ((iVar2 == 1) &&
       (puVar3 = (undefined4 *)fn_82FEF008(0xffffffff832643f4), puVar3 != (undefined4 *)0x0))
    {
      *puVar3 = puVar1;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      fn_83024470(puVar1 + 4);
      fn_830224E8(puVar1 + 0x24);
      fn_82FA5190(lbl_831BC770,puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}

