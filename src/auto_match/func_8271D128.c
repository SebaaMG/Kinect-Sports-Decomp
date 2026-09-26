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
extern unsigned int *auStack_4f;
extern int fn_82695598();
extern int fn_82696330();
extern int fn_826A1CC8();
extern int fn_826BF638();
extern int fn_8271CDB0();
extern unsigned int lbl_8200FC70;
extern unsigned int lbl_8200FC78;
extern unsigned int lbl_8200FCCC;
extern unsigned int uStack_50;


undefined4 * fn_8271D128(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uStack_50;
  undefined1 auStack_4f [15];
  undefined1 auStack_40 [64];
  
  fn_8271CDB0();
  *param_1 = &lbl_8200FCCC;
  param_1[4] = &lbl_8200FC78;
  param_1[0x10] = &lbl_8200FC70;
  uStack_50 = 1;
  fn_826BF638(param_1 + 0x10,param_1,param_2,0xffffffff8200fc28,&uStack_50);
  auStack_4f[0] = 1;
  uVar1 = fn_82695598(auStack_40,param_2,0xffffffff8271cf50);
  fn_826A1CC8(param_1 + 4,param_2,0xffffffff8200eb84,uVar1,auStack_4f);
  fn_82696330(auStack_40);
  return param_1;
}

