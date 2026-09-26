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
extern unsigned int *auStack_18;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_826638B0();
extern int fn_82668D40();
extern int fn_82668D80();
extern int fn_82668E70();
extern int fn_82668EA0();
extern int fn_8266A2C0();
extern int fn_8266A420();
extern unsigned int iStack_20;
extern unsigned int iStack_24;
extern unsigned int uStack00000014;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;
extern unsigned int uStack_30;


void fn_8266A110(uint param_1,char param_2)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  char cVar4;
  int *piVar3;
  uint uStack00000014;
  char cStack0000001f;
  undefined4 uStack_30;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  undefined4 uStack_14;
  
  uStack00000014 = param_1;
  cStack0000001f = param_2;
  fn_82668E70(&uStack_30);
  puVar2 = (undefined4 *)fn_82668D40(auStack_2c,(ulonglong)uStack00000014 + 4);
  uStack_30 = *puVar2;
  while( true ) {
    uVar1 = fn_82668D80(auStack_28,(ulonglong)uStack00000014 + 4);
    cVar4 = fn_82668EA0(&uStack_30,uVar1);
    if (cVar4 == '\0') break;
    if (cStack0000001f != '\0') {
      piVar3 = (int *)fn_826638B0(&uStack_30,0);
      iStack_24 = *piVar3;
      iStack_20 = iStack_24;
      if (iStack_24 == 0) {
        uStack_14 = 0;
      }
      else {
        uStack_14 = fn_8266A2C0(iStack_24,1);
      }
    }
    uStack_1c = uStack_30;
    puVar2 = (undefined4 *)fn_8266A420(auStack_18,(ulonglong)uStack00000014 + 4,uStack_30);
    uStack_30 = *puVar2;
  }
  return;
}

