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
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82230300();
extern int fn_82240378();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82873A00();
extern int fn_82873AA0();


undefined8 fn_828746C8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar4;
  undefined8 uVar3;
  undefined4 auStack_90 [4];
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [40];
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar2 = (undefined4 *)*puVar1;
  while (puVar2 != puVar1) {
    cVar4 = (*(code *)**(undefined4 **)puVar2[2])();
    if (cVar4 == '\0') {
      uVar3 = (**(code **)(*(int *)puVar2[2] + 0x44))(auStack_40);
      fn_828648B8(auStack_80,uVar3);
      fn_82240378(auStack_60,auStack_80);
      fn_82230300(auStack_80,1,0);
      fn_82864898(auStack_40);
      auStack_90[0] = puVar2[2];
      puVar2 = (undefined4 *)*puVar2;
      fn_82873AA0(param_1);
      fn_82873A00(param_1,auStack_90);
      fn_82230300(auStack_60,1,0);
    }
    else {
      puVar2 = (undefined4 *)*puVar2;
    }
    puVar1 = *(undefined4 **)(param_1 + 4);
  }
  return 0x20120000;
}

