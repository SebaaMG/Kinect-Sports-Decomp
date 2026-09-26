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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82FF9460();
extern int fn_82FFA6E8();
extern unsigned int lbl_832642F0;
extern unsigned int uStack_40;


undefined8
fn_82FE77D0(ulonglong param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uStack_40;
  
  if ((((param_1 & 0x7ff) == 0) && ((param_1 & 0xffffffff) != 0)) && (0x17 < (param_2 & 0xffffffff))
     ) {
    uVar2 = fn_82FF9460(param_1,param_2);
    *param_5 = uVar2;
    uVar1 = fn_82FFA6E8(lbl_832642F0,param_3,CONCAT44(param_4,1),CONCAT44(uVar2,0xffffffff),
                              CONCAT44((int)param_1,(int)param_2),(ulonglong)uStack_40 << 0x20);
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}

