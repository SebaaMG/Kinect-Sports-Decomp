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
extern unsigned int *auStack_bc;
extern unsigned int *auStack_f0;
extern int fn_8267BE38();
extern int fn_8267E0E0();
extern int fn_8267E160();
extern int fn_8267E2B0();
extern int fn_8267ED80();
extern int fn_8267EE20();
extern int fn_8267EEE0();
extern int fn_8267EF68();
extern int fn_826933E8();
extern unsigned int uStack_100;
extern unsigned int uStack_fc;


undefined8 fn_8267F828(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  char cVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f4;
  undefined1 auStack_f0 [48];
  undefined1 *puStack_c0;
  undefined1 auStack_bc [188];
  
  fn_8267E0E0(&puStack_c0,param_1,param_2);
  cVar3 = fn_8267E160(puStack_c0,param_2);
  if (cVar3 == '\0') {
    if ((param_3 & 0xffffffff) != 0) {
      fn_8267EEE0(auStack_f0,0,0);
      puStack_f8 = auStack_f0;
      uStack_100 = (undefined4)param_1;
      uStack_fc = (undefined4)param_2;
      puStack_f4 = puStack_c0;
      cVar3 = fn_8267ED80(&uStack_100,0xffffffff8267f7c0);
      if (cVar3 != '\0') {
        cVar3 = fn_8267E160(puStack_c0,param_2);
        if (cVar3 == '\0') {
          uVar1 = 0;
          uVar4 = 0;
          uVar2 = param_3;
          if ((int)param_3 != -1) {
            uVar4 = fn_826933E8();
          }
          do {
            cVar3 = fn_8267E2B0(auStack_f0,uVar2);
            if (cVar3 == '\0') {
LAB_8267f998:
              fn_8267EE20(&uStack_100,0xffffffff8267f7c0);
              fn_8267EF68(auStack_f0);
              if (puStack_c0 == auStack_bc) {
                return uVar1;
              }
              fn_8267BE38();
              return uVar1;
            }
            cVar3 = fn_8267E160(puStack_c0,param_2);
            if (cVar3 != '\0') {
              uVar1 = 1;
              goto LAB_8267f998;
            }
            if ((int)param_3 != -1) {
              uVar2 = fn_826933E8();
              uVar2 = (uVar2 & 0xffffffff) - (uVar4 & 0xffffffff);
              if ((param_3 & 0xffffffff) <= (uVar2 & 0xffffffff)) goto LAB_8267f998;
              uVar2 = param_3 - uVar2;
            }
          } while( true );
        }
        fn_8267EE20(&uStack_100,0xffffffff8267f7c0);
        fn_8267EF68(auStack_f0);
        goto LAB_8267f864;
      }
      fn_8267EF68(auStack_f0);
    }
    if (puStack_c0 != auStack_bc) {
      fn_8267BE38();
    }
    uVar1 = 0;
  }
  else {
LAB_8267f864:
    if (puStack_c0 != auStack_bc) {
      fn_8267BE38();
    }
    uVar1 = 1;
  }
  return uVar1;
}

