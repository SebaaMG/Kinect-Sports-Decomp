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
extern unsigned int *auStack_40;
extern int fn_8288B918();
extern int fn_8288BE40();
extern int fn_8288FCA8();
extern int fn_82891250();
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_828921E8(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [64];
  
  uVar3 = (ulonglong)(uint)param_1[4];
  if (uVar3 < (param_2 & 0xffffffff)) {
    uStack_50 = *param_1;
    uStack_4c = 0;
    if (uVar3 != 0) {
      fn_8288B918(&uStack_50,uVar3);
    }
    fn_82891250(param_1,CONCAT44(uStack_50,uStack_4c),param_2 - uVar3,param_3);
  }
  else if ((param_2 & 0xffffffff) < uVar3) {
    uVar1 = *param_1;
    uStack_4c = 0;
    uStack_50 = uVar1;
    if (uVar3 != 0) {
      fn_8288B918(&uStack_50,uVar3);
    }
    uStack_44 = 0;
    uStack_48 = uVar1;
    puVar2 = (undefined8 *)fn_8288BE40(auStack_40,&uStack_48,param_2);
    fn_8288FCA8(&uStack_48,param_1,*puVar2,CONCAT44(uStack_50,uStack_4c));
  }
  return;
}

