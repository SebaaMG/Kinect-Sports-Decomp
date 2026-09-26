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
extern int fn_82CE4118();
extern int fn_82D86660();
extern int fn_82D9A420();


void fn_82D8DB38(int param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    fn_82D86660(*(int *)(param_1 + 0x14),param_1 + 0x18,6);
    puVar2 = (undefined4 *)(param_1 + 0x14);
    lVar1 = 6;
    do {
      fn_82D9A420(puVar2[1],param_1 + 0xc);
      fn_82CE4118(puVar2[1]);
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
      *puVar2 = 0;
    } while (lVar1 != 0);
    (**(code **)(*(int *)(param_1 + 8) + 4))(param_1 + 8,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  return;
}

