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
extern int fn_82FB04A0();
extern int fn_82FF5D28();
extern int fn_83007AE8();
extern int fn_83035A40();
extern int fn_83035CC0();
extern int fn_83035EC0();
extern unsigned int stack0x0000001c;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


undefined8 fn_83031A78(longlong param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puStack0000001c;
  undefined4 uStack00000024;
  
  puStack0000001c = (uint *)(param_2 + 4);
  uStack00000024 = param_3;
  uVar2 = fn_83007AE8(param_1,&stack0x0000001c,&stack0x00000024,0);
  if (((int)uVar2 == 1) &&
     (uVar2 = fn_82FB04A0(param_1,&stack0x0000001c,&stack0x00000024), (int)uVar2 == 1)) {
    uVar5 = 0;
    uVar1 = *puStack0000001c;
    puStack0000001c = puStack0000001c + 1;
    if (uVar1 != 0) {
      do {
        piVar3 = (int *)fn_83035A40(*puStack0000001c);
        if (piVar3 == (int *)0x0) {
          return 2;
        }
        fn_83035CC0(piVar3,param_1);
        uVar2 = fn_83035EC0(piVar3,&stack0x0000001c,&stack0x00000024);
        if ((int)uVar2 != 1) {
          (**(code **)(*piVar3 + 8))(piVar3);
          return uVar2;
        }
        puVar4 = (undefined4 *)fn_82FF5D28(param_1 + 0xa8);
        if (puVar4 == (undefined4 *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
          return 2;
        }
        uVar5 = uVar5 + 1;
        *puVar4 = piVar3;
      } while (uVar5 < uVar1);
    }
  }
  return uVar2;
}

