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
extern int fn_8263B758();
extern int fn_8266C8A0();
extern int fn_8266EC60();
extern int fn_82670230();
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_826896B8();
extern int fn_82F67FE8();
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_82675760(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar4;
  int *piVar5;
  char cVar6;
  ulonglong uVar3;
  undefined8 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int aiStack_48 [2];
  undefined1 auStack_40 [24];
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar7 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  fn_82F67FE8(param_2 + 6,0xffffffff82002c30,&uStack_50,&uStack_4c);
  uVar1 = uStack_50;
  fn_8263B758(uStack_50,0,auStack_40);
  uVar2 = fn_8266EC60();
  puVar4 = (undefined4 *)fn_8266C8A0(aiStack_48,uVar2);
  piVar5 = (int *)(**(code **)(*(int *)*puVar4 + 8))();
  if (aiStack_48[0] != 0) {
    fn_8267C4F0(aiStack_48[0]);
  }
  if (piVar5 != (int *)0x0) {
    cVar6 = (**(code **)(*piVar5 + 0x34))(piVar5,uVar1,0,0);
    if (cVar6 != '\0') {
      uVar3 = fn_8267B890(lbl_831E7E64,0x24,0);
      if ((uVar3 & 0xffffffff) != 0) {
        uVar7 = fn_826896B8(uVar3,piVar5,uStack_28,uStack_24);
      }
      fn_82670230(piVar5);
      return uVar7;
    }
    fn_82670230(piVar5);
  }
  return 0;
}

