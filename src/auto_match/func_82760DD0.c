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
extern int fn_8275EB28();
extern int fn_8275FE18();
extern int fn_8275FFC0();
extern int fn_82F68CC0();
extern unsigned int lbl_8201488C;


undefined4 * fn_82760DD0(undefined4 *param_1)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_40 [40];
  
  param_1[1] = 1;
  *param_1 = &lbl_8201488C;
  iVar2 = fn_8275EB28(param_1 + 2);
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  if (*(uint *)(iVar2 + 0x18) < *(uint *)(iVar2 + 0x1c)) {
    param_1[0x15] = 0;
    uVar1 = fn_8275FFC0(iVar2,param_1 + 0x18,param_1 + 0x19,param_1 + 0x1a);
    fn_8275FE18(auStack_40,uVar1);
    fn_82F68CC0(param_1 + 0xb,auStack_40,0x28);
    param_1[0x16] = (float)(longlong)(int)param_1[0xe] * (float)param_1[0x14];
    param_1[0x17] = (float)(longlong)(int)param_1[0xf] * (float)param_1[0x14];
  }
  else {
    param_1[0x15] = 4;
  }
  return param_1;
}

