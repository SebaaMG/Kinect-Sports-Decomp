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
extern int fn_82A21458();
extern unsigned int lbl_83219B94;
extern unsigned int lbl_83219CB8;


undefined4 * fn_82A226B0(void)

{
  undefined4 *puVar1;
  
  RtlEnterCriticalSection(lbl_83219B94);
  puVar1 = (undefined4 *)0x0;
  if (lbl_83219CB8 != 0) {
    for (puVar1 = *(undefined4 **)(lbl_83219B94 + 0x2c);
        puVar1 != (undefined4 *)(lbl_83219B94 + 0x2c); puVar1 = (undefined4 *)*puVar1) {
      if ((puVar1[7] & 1) != 0) {
        puVar1[7] = puVar1[7] & 0xfffffffe;
        lbl_83219CB8 = lbl_83219CB8 + -1;
        fn_82A21458(lbl_83219B94);
        goto LAB_82a22738;
      }
    }
    lbl_83219CB8 = 0;
    puVar1 = (undefined4 *)0x0;
  }
LAB_82a22738:
  RtlLeaveCriticalSection(lbl_83219B94);
  return puVar1;
}

