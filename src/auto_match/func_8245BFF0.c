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
extern int fn_82459C60();
extern int fn_8245CBE0();
extern int fn_82A1E108();


void fn_8245BFF0(int param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x580) = (int)param_2;
  fn_82A1E108(100);
  if ((*(int *)(param_1 + 0x574) == 0) && (*(int *)(param_1 + 0x578) == 0)) {
    if (*(int *)(param_1 + 0x570) != 0) {
      if (*(int *)(param_1 + 0x6b0) == 2) {
        RtlEnterCriticalSection(param_1);
        (**(code **)(**(int **)(param_1 + 0x570) + 0x28))
                  (*(int **)(param_1 + 0x570),*(undefined4 *)(param_1 + 0x71c),param_2);
        *(undefined4 *)(param_1 + 0x6b0) = 0;
        RtlLeaveCriticalSection(param_1);
      }
      else {
        *(int *)(param_1 + 0x6b0) = *(int *)(param_1 + 0x6b0) + 1;
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x578) = 0;
    *(undefined4 *)(param_1 + 0x57c) = 0;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  fn_82459C60(param_1 + 0x40);
  fn_8245CBE0(param_1);
  return;
}

