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
extern int fn_8267B8F0();
extern int fn_826EA070();
extern int fn_826EA0C0();
extern int fn_826EA350();
extern int fn_826EA5C8();
extern int fn_827BDB08();
extern unsigned int lbl_8200D84C;
extern unsigned int lbl_831E7E64;


undefined4 * fn_826EAC58(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = &lbl_8200D84C;
  uVar1 = fn_8267B8F0(lbl_831E7E64,0x540,0x20,0);
  param_1[0xc1] = uVar1;
  puVar4 = param_1 + 0x6e;
  *(undefined1 *)((int)param_1 + 0x309) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  uVar1 = fn_827BDB08(puVar4);
  puVar3 = param_1 + 2;
  param_1[0x6e] = fn_826EA5C8;
  param_1[2] = uVar1;
  iVar2 = fn_826EA070(puVar3,puVar4);
  if (iVar2 != 0) {
    fn_826EA350(puVar3,param_3);
    fn_826EA0C0(puVar3,puVar4,0);
  }
  return param_1;
}

