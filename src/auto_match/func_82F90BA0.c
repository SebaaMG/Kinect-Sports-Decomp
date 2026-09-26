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
extern unsigned int *auStack_50;
extern int fn_82A1F2F8();
extern int fn_82F90628();
extern int fn_82F90680();
extern int fn_82F90B28();
extern int fn_82F90DB0();
extern int fn_82F90E28();
extern int fn_82F90EF8();


int fn_82F90BA0(int *param_1)

{
  uint uVar1;
  char cVar3;
  int iVar2;
  int *piStack00000014;
  undefined1 auStack_50 [64];
  
  piStack00000014 = param_1;
  fn_82F90628(auStack_50,param_1 + 3);
  uVar1 = piStack00000014[0x16];
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      iVar2 = (**(code **)(*piStack00000014 + 0x14))(piStack00000014);
      if (iVar2 < 0) {
        fn_82F90E28(piStack00000014,iVar2);
        fn_82F90680(auStack_50);
        return iVar2;
      }
      if (iVar2 != 0x540002) {
        fn_82F90EF8(piStack00000014);
      }
    }
    else {
      if (2 < uVar1) {
        fn_82F90680(auStack_50);
        return -0x7fabffee;
      }
      if (piStack00000014[0x18] != 0) {
        cVar3 = fn_82F90B28(piStack00000014);
        if ((*(char *)(piStack00000014 + 0x19) == '\0') && (cVar3 != '\0')) {
          *(undefined1 *)(piStack00000014 + 0x19) = 1;
          piStack00000014[0x18] = 0;
        }
        else {
          *(char *)(piStack00000014 + 0x19) = cVar3;
        }
      }
      iVar2 = fn_82A1F2F8();
      if (((299999 < (uint)(iVar2 - piStack00000014[0x18])) || (piStack00000014[0x18] == 0)) &&
         (iVar2 = fn_82F90DB0(piStack00000014), iVar2 < 0)) {
        fn_82F90680(auStack_50);
        return iVar2;
      }
    }
  }
  fn_82F90680(auStack_50);
  return 0;
}

