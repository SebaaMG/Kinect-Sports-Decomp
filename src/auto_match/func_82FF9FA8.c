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
extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_82FF9FA8(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x34);
  if (puVar2 != *(undefined4 **)(param_1 + 0x38)) {
    do {
      cVar1 = '\x01';
      RtlEnterCriticalSection(0xffffffff8326434c);
      if (puVar2 != *(undefined4 **)(param_1 + 0x38)) {
        do {
          if (cVar1 == '\0') break;
          (**(code **)(*(int *)*puVar2 + 8))();
          puVar2 = puVar2 + 1;
          cVar1 = cVar1 + '\x01';
        } while (puVar2 != *(undefined4 **)(param_1 + 0x38));
      }
      RtlLeaveCriticalSection(0xffffffff8326434c);
    } while (puVar2 != *(undefined4 **)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x34);
    fn_82FA5190(lbl_831BC768);
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}

