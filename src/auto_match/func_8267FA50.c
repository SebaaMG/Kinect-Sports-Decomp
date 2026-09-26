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
extern unsigned int *auStack_70;
extern int fn_8267E228();
extern int fn_8267E2B0();
extern int fn_8267ED80();
extern int fn_8267EE20();
extern int fn_8267EEE0();
extern int fn_8267EF68();
extern int fn_826933E8();
extern unsigned int uStack_74;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


undefined8 fn_8267FA50(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  undefined8 uVar1;
  char cVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *puStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [112];
  
  uVar1 = fn_8267E228();
  if (((int)uVar1 == -1) && ((param_3 & 0xffffffff) != 0)) {
    fn_8267EEE0(auStack_70,0,0);
    puStack_78 = auStack_70;
    uVar4 = 0;
    uStack_80 = (undefined4)param_1;
    uStack_7c = (undefined4)param_2;
    uStack_74 = 0;
    cVar3 = fn_8267ED80(&uStack_80,0xffffffff8267f9d0);
    if (cVar3 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_8267E228(param_1,param_2);
      if ((int)uVar1 == -1) {
        if ((int)param_3 != -1) {
          uVar4 = fn_826933E8();
        }
        uVar1 = fn_8267E228(param_1,param_2);
        uVar2 = param_3;
        if ((int)uVar1 == -1) {
          while( true ) {
            do {
              cVar3 = fn_8267E2B0(auStack_70,uVar2);
              if ((cVar3 == '\0') || (uVar1 = fn_8267E228(param_1,param_2), (int)uVar1 != -1))
              goto LAB_8267faf0;
            } while ((int)param_3 == -1);
            uVar2 = fn_826933E8();
            uVar2 = (uVar2 & 0xffffffff) - (uVar4 & 0xffffffff);
            if ((param_3 & 0xffffffff) <= (uVar2 & 0xffffffff)) break;
            uVar2 = param_3 - uVar2;
          }
        }
      }
LAB_8267faf0:
      fn_8267EE20(&uStack_80,0xffffffff8267f9d0);
    }
    fn_8267EF68(auStack_70);
  }
  return uVar1;
}

