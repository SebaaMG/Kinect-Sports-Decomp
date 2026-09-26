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
extern int fn_8286F3A8();
extern int fn_8287A7A8();
extern int fn_8287A7B0();
extern int fn_8287A7D0();
extern int fn_82F63CA0();


undefined8 fn_8286F598(int param_1)

{
  undefined4 uVar1;
  char cVar3;
  undefined8 uVar2;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 0x14);
  puVar4 = puVar5;
  if (puVar5 != *(undefined4 **)(param_1 + 0x18)) {
    do {
      puVar4 = puVar4 + 1;
      uVar1 = *puVar5;
      cVar3 = fn_8287A7B0(uVar1);
      if (cVar3 == '\0') {
        cVar3 = fn_8287A7D0(uVar1);
        if (cVar3 != '\0') {
          uVar2 = fn_8287A7A8(uVar1);
          fn_8286F3A8(param_1,uVar2);
        }
      }
      else {
        fn_82F63CA0(puVar5,puVar4,(*(int *)(param_1 + 0x18) - (int)puVar4 >> 2) << 2);
        *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -4;
      }
      puVar5 = puVar5 + 1;
    } while (puVar5 != *(undefined4 **)(param_1 + 0x18));
  }
  return 0x20100000;
}

