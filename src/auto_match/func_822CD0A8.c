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
extern int fn_822CD140();
extern int fn_82520780();
extern int fn_82552788();
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822CD0A8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = *param_2;
  iVar2 = fn_82520780((double)*(float *)(iVar1 + 0x18),0xffffffff83265a28);
  if (iVar2 != 0) {
    uStack_30 = 0;
    uStack_2c = 0;
    uStack_28 = 0;
    fn_82552788(*(undefined4 *)(param_1 + 8),
                      (ulonglong)*(uint *)(iVar1 + 0x10) * 0x18 +
                      (ulonglong)*(uint *)(param_1 + 0x30) + 0xa30,iVar1 + 0x14,
                      (ulonglong)*(uint *)(param_1 + 0x30),(ulonglong)*(uint *)(iVar1 + 0x10),0,0,
                      &uStack_30);
    fn_822CD140(&uStack_30);
  }
  return;
}

