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
extern int fn_828EA790();
extern unsigned int *lbl_83212A04;


ulonglong fn_82880BD8(void)

{
  undefined4 *puVar1;
  undefined4 *apuStack_20 [2];
  
  puVar1 = lbl_83212A04;
  apuStack_20[0] = (undefined4 *)*lbl_83212A04;
  while( true ) {
    if (apuStack_20[0] == puVar1) {
      return 0xffffffffffffffff;
    }
    if ((apuStack_20[0][4] != 0) && (*(char *)(apuStack_20[0][4] + 5) != '\0')) break;
    fn_828EA790(apuStack_20);
  }
  return (ulonglong)(uint)apuStack_20[0][3];
}

