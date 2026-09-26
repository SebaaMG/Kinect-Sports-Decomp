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
extern int fn_82BF9248();
extern int fn_82BF9498();
extern int fn_82BF95B0();
extern int fn_82BFA0C0();
extern unsigned int lbl_8322FD08;
extern unsigned int lbl_8322FD18;
extern unsigned int lbl_8322FD2C;


void fn_82BFA140(int *param_1,char param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_40 [64];
  
  RtlEnterCriticalSection(0xffffffff83231d48);
  lbl_8322FD2C = 0xffff;
  fn_82BF9248(*(undefined2 *)(param_1 + 1));
  puVar1 = lbl_8322FD08;
  if (*(char *)((int)param_1 + 0xe) == '\0') {
    for (; (undefined4 **)puVar1 != &lbl_8322FD08; puVar1 = (undefined4 *)*puVar1) {
      if ((int *)puVar1[3] == param_1) {
        fn_82BF95B0(puVar1);
      }
    }
    NtFlushBuffersFile(lbl_8322FD18,auStack_40);
    if ((*(char *)((int)param_1 + 0xf) != '\0') || (*param_1 != 0)) {
      param_2 = '\x01';
    }
  }
  if (param_2 != '\0') {
    fn_82BF9498(*(undefined2 *)(param_1 + 1));
  }
  fn_82BFA0C0();
  *(undefined2 *)(param_1 + 1) = 0xffff;
  RtlLeaveCriticalSection(0xffffffff83231d48);
  return;
}

