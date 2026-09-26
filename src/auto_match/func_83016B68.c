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
extern int fn_83016920();
extern int fn_8302A5B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200571C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_8216C698;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


double fn_83016B68(int param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar4 = (double)lbl_821AAD20;
  dVar3 = (double)fn_83016920();
  fVar1 = lbl_8216C698;
  if (dVar4 < dVar3) {
    dVar2 = (double)lbl_8200D898;
    if (dVar2 < dVar3) {
      do {
        dVar3 = (double)(float)(dVar3 * (double)lbl_82186E6C);
        dVar4 = (double)(float)(dVar4 + (double)lbl_8200571C);
      } while (dVar2 < dVar3);
    }
    for (; dVar3 < (double)lbl_82002AE0; dVar3 = (double)(float)(dVar3 * dVar2)) {
      dVar4 = (double)(float)(dVar4 - (double)lbl_8200571C);
    }
    dVar3 = (double)fn_8302A5B8(*(undefined4 *)(param_1 + 4));
    fVar1 = (float)(dVar3 + dVar4);
  }
  return (double)fVar1;
}

