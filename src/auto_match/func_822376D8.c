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
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT41(h,l) ((U64)((((U32)(h)) << 8) | ((U8)(l))))
#define CONCAT51(h,l) ((U64)((((U64)(h)) << 8) | ((U8)(l))))
#define CONCAT61(h,l) ((U64)((((U64)(h)) << 8) | ((U8)(l))))
#define CONCAT71(h,l) ((U64)((((U64)(h)) << 8) | ((U8)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82230300();
extern int fn_82238148();
extern int fn_822381A8();
extern int fn_8223B688();
extern int fn_8224AB50();
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8
fn_822376D8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_80 [32];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined1 auStack_50 [28];
  code *pcStack_34;
  code *pcStack_30;
  
  uVar1 = fn_8223B688(auStack_80,param_4);
  uStack_60 = (undefined4)param_2;
  uStack_58 = CONCAT71(CONCAT61(CONCAT51(CONCAT41((uint)CONCAT21(0x101,param_5) << 8,1),param_6),
                                param_7),param_8);
  uStack_5c = param_3;
  fn_8223B688(auStack_50,uVar1);
  pcStack_34 = fn_82238148;
  pcStack_30 = fn_8224AB50;
  fn_82230300(uVar1,1,0);
  fn_822381A8(param_1,param_2,&uStack_60);
  fn_82230300(auStack_50,1,0);
  return param_1;
}

