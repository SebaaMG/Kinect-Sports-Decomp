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
extern unsigned int *auStack_70;
extern int fn_829D0440();
extern int fn_82F691F0();
extern int fn_831429CC();


undefined8 fn_829D0D88(void)

{
  int iVar1;
  undefined4 auStack_70 [28];
  
  RtlEnterCriticalSection(0xffffffff8315c428);
  auStack_70[0] = 0;
  iVar1 = fn_831429CC(0xffffffff8315c408,0,0x7c,auStack_70);
  if (iVar1 < 0) {
    fn_829D0440(auStack_70[0],1);
    ObDereferenceObject(auStack_70[0]);
    RtlLeaveCriticalSection(0xffffffff8315c428);
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(auStack_70[0],0,0x7c);
}

